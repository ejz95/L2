using System;
public class Alpaca: Animal
{
   public string Lana  {get;set;}
  
   public void escupir()
   {
       Console.WriteLine("Alpaca escupe como medio de defensa. +10 de daño");
   }
}