using System;
public abstract class Acuaticos: Reino // herencia
{
   public int Aleta {get;set;} 
   
   public void funcionesacuaticoss()
    {
      cosasdeacuaticos();
    }
   
   private void cosasdeacuaticos()//encapsulamiento
    {
        Console.WriteLine("Nadar dia y noche");
        
    }
}    