using System;
public class Lobo: Animal
{
   public string Sentido {get;set;}
   
   
   public void aullido()
   {
       Console.WriteLine("Se escucha un aullido bajo la luna llena");
   }
}