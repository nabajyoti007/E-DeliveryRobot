void goWaypoint()
{   
 Serial1.println("Go to Waypoint");

 while (true)  
  {                                                               
  bluetooth();                                                    
  if (blueToothVal == 5){break;}                                  
  getCompass();                                                                                     
  getGPS();                                                      
  
  if (millis() > 5000)               
    Serial1.println(F("No GPS data: check wiring"));     
 
  Distance_To_Home = TinyGPSPlus::distanceBetween(gps.location.lat(),gps.location.lng(),Home_LATarray[ac], Home_LONarray[ac]);  
  GPS_Course = TinyGPSPlus::courseTo(gps.location.lat(),gps.location.lng(),Home_LATarray[ac],Home_LONarray[ac]);                                
   
 
    if (Distance_To_Home == 0)                                  
        {
      void StopCar();                                               
        Serial1.println("You have arrived!");                             
        ac++;                                                    
        break;                                                 
                                                                 
        
        }    

  }                                                              

  
}                                                                
