void bluetooth()
{
 while (Serial1.available())                                
 {  
  {  
      str = Serial1.readStringUntil('\n');                     
  } 
    
    blueToothVal = (str.toInt());                             
    Serial.print("BlueTooth Value ");
    Serial.println(blueToothVal);    

 switch (blueToothVal) 
 {
      case 1:                                
        Serial1.println("Forward");
    void Forward();
        break;

      case 2:                 
        Serial1.println("Reverse");
     void Reverse();
        break;

      case 3:         
        Serial1.println("Left");
     void LeftTurn();
        break;
        
      case 4:                     
        Serial1.println("Right");
       void RightTurn();
        break;
        
      case 5:                                            
        Serial1.println("Stop Car ");
        StopCar();
        break; 

      case 6:                 
        setWaypoint();
        break;
      
      case 7:        
        goWaypoint();
        break;  
      
      case 8:        
        Serial1.println("Turn Around");
       void turnAround();
        break;
      
      case 9:        
         Serial1.println("Compass Forward");
        setHeading();
       void Compass_Forward();
        break;
      
      case 10:
        setHeading();
        break; 

      case 11:
         gpsInfo();
        break;
      
      case 12:  
        Serial1.println("Compass Turn Right");
       void CompassTurnRight();
        break;
      
      case 13:  
        Serial1.println("Compass Turn Left");
       void CompassTurnLeft();
        break;
        
      case 14:  
        Serial1.println("Calibrate Compass");
        calibrateCompass();
        break;

      case 15:  
       // pingToggle();
        break;  

      case 16:
        clearWaypoints();
        break;  

      case 17:                  
        ac = 0;
        Serial1.print("Waypoints Complete");
        break;      

   } 

 }                                                            
                                                              
   if (Serial1.available() < 0)                              
    {
     Serial1.println("No Bluetooth Data ");          
    }
  
}
