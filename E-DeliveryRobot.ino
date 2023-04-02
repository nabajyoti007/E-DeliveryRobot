#include <AFMotor.h>                                             
#include "Wire.h"                                                                                             
#include "HMC5883L.h"                                                                                 
#include <TinyGPS++.h>                                            
                                                               
                                                                                                                                
int GPS_Course;                                                 
int Number_of_SATS;                                                
TinyGPSPlus gps;                                                   
                                                           

AF_DCMotor motor1(1, MOTOR12_64KHZ);                               
AF_DCMotor motor2(2, MOTOR12_64KHZ);                              
AF_DCMotor motor3(3, MOTOR12_64KHZ);               
AF_DCMotor motor4(4, MOTOR12_64KHZ);                     

int turn_Speed = 175;                                            
int mtr_Spd = 250;                                              

HMC5883L compass;                                                  
int16_t mx, my, mz;                                              
int desired_heading;                                              
int compass_heading;                                              
int compass_dev = 5;                                               
                                                                                                                                
int Heading_A;                                          
int Heading_B;                                                    
int pass = 0;                                             

String str;                                                        
int blueToothVal;                                              


unsigned long Distance_To_Home;                                  

int ac =0;                                                      
int wpCount = 0;                                               
double Home_LATarray[50];                                   
double Home_LONarray[50];                                 


int increment = 0;

void setup() 
{  
  Serial.begin(115200);                                           
  Serial1.begin(9600);                                         
  Serial2.begin(9600);                            
  

  Wire.begin();                                                   
  compass.begin();                                                 
  compass.setRange(HMC5883L_RANGE_1_3GA);                        
  compass.setMeasurementMode(HMC5883L_CONTINOUS);               
  compass.setDataRate(HMC5883L_DATARATE_30HZ);                  
  compass.setSamples(HMC5883L_SAMPLES_8);                          
  compass.setOffset(0,0);                                         

 void Startup();                                                    
}

void loop()
{ 
  
  bluetooth();                                                                                                      
  getGPS();                                                      
  getCompass();                                                                                                    
}
