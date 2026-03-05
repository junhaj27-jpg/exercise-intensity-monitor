
//////////
/////////  All Serial Handling Code,
/////////  It's Changeable with the 'outputType' variable
/////////  It's declared at start of code.
/////////
int total=0; // 주기재주는함수
int count=0; // 주기개수확인함수
int nai=25;
int dudn=220;
int math1=0;
int math2=0;
int math3=0;
int math4=0;
int a=1;



#include <SoftwareSerial.h>

SoftwareSerial BTSerial(3,4);


unsigned long preTime; //시간확인변수
unsigned long lastTime=0; //마지막으로 잰 박동시간 확인변수






void serialOutput(){   // Decide How To Output Serial.
  switch(outputType){
    case PROCESSING_VISUALIZER:
      sendDataToSerial('S', Signal);     // goes to sendDataToSerial function
      break;
    case SERIAL_PLOTTER:  // open the Arduino Serial Plotter to visualize these data

     BTSerial.begin(115200);

    unsigned long nowTime=millis();

    if(nowTime-preTime<=10000){  // 10초마다 측정을 위한 시간함수     //여기부터
      if(total!=IBI){
        count++;
       }
        total=IBI;
        }else{
      Serial.print("박동 수:");
      Serial.println(count);
      int bpm =  count * 6;                                          //여기까지가 IBI로 갯수(약0.7초 주기)를 재고 X6 한거
      
      
      Serial.print("bpm값:");
      Serial.println(bpm);
      BTSerial.print("bpm값:");
      BTSerial.print(bpm);
      

      preTime=millis();
      lastTime=preTime;
      count=0;

      if(a==1){
      math1=dudn-nai;
      math2=math1-bpm;
      math3=(math2*0.7)+bpm;
      math4=(math2*0.8)+bpm;
      BTSerial.print(",체지방감소:");
      BTSerial.print(math3);
      BTSerial.print(",심폐지구력증가:");
      BTSerial.println(math4);
      Serial.print("체지방 감소 bpm:");
      Serial.println(math3);
      Serial.print("심폐지구력 증가 bpm:");
      Serial.println(math4);
      a=0;
      }
    }

    
    break;
  
  default:
    break;

    }

    }
    


//  Decides How To OutPut BPM and IBI Data
void serialOutputWhenBeatHappens(){
  switch(outputType){
    case PROCESSING_VISUALIZER:    // find it here https://github.com/WorldFamousElectronics/PulseSensor_Amped_Processing_Visualizer
      sendDataToSerial('B',BPM);   // send heart rate with a 'B' prefix
      sendDataToSerial('Q',IBI);   // send time between beats with a 'Q' prefix
      break;

    default:
      break;
  }
}

//  Sends Data to Pulse Sensor Processing App, Native Mac App, or Third-party Serial Readers.
void sendDataToSerial(char symbol, int data ){
    Serial.print(symbol);
    Serial.println(data);
  }
