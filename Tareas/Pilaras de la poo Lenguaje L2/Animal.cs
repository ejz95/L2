using System;
public abstract class Animal: Reino //Herencia
{
   
    public string Pelaje {get;set;}
    public string Parto {get; set;}
    
    public void funcionesmamiferos()
    {
      cosasdemamiferos();
    }
   
    private void cosasdemamiferos()//encapsulamiento
    {
        Console.WriteLine("Se ha despertado!");
        Console.WriteLine("Esta olfateando al rededor");
        Console.WriteLine("Ha cazado una presa!");
        Console.WriteLine("Se debora la presa");
        Console.WriteLine("Se fue a domir");
        
    }

    public void defensasdealpaca()
    {
      cosasdealpacas();
    }
   
    private void cosasdealpacas()//encapsulamiento
    {
        Console.WriteLine("Pastar llanuras todo el dia sin parar");
    }
}