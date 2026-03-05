
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

    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);

    unsigned long nowTime=millis();

    int BTdata =0;

    if(BTSerial.available()){
      BTdata = BTSerial.read();
      Serial.println("앱인벤터에서 보내온 값+그값을 BTdata로 넣은 값:");
      Serial.println(BTSerial.read());
      Serial.println(BTdata);
      }

    if(BTdata==49){
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
    }
    if(BTdata==50){
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
    }
    if(BTdata==51){
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
    }
    if(BTdata==52){
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
    }
    if(BTdata==53){
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
    }



    if(nowTime-preTime<=10000){  // 10초마다 측정을 위한 시간함수
      if(total!=IBI){
        count++; //심박수에 맞춰서 카운트
       }
        total=IBI; //현재 값과 다르면 측정
        }else{
          
      Serial.print("박동 수:");
      Serial.println(count);
      int bpm =  count * 6; //1분 bpm값을 구하는 방식 
      
      
      Serial.print("bpm값:");
      Serial.println(bpm); //아두이노에 출력
      BTSerial.print("bpm값:");
      BTSerial.print(bpm); //앱 인벤터에 출력
      

      preTime=millis(); //현재시간으로 변경
      lastTime=preTime; //마지막시간을 현재시간으로 변경
      count=0; //카운트를 0으로 설정

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
