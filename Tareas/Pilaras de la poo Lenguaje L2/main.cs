using System;
namespace main
{
  class HelloWorld
  {
    static void Main ()
    {
      int num;
        Console.WriteLine ("Elija una opcion");
        Console.WriteLine ("1 Mamiferos");
        Console.WriteLine ("2 Aves");
        Console.WriteLine ("3 Acuaticos");
        num = Convert.ToInt32 (Console.ReadLine ());

      switch (num)
	{
	case 1:
	  {
	    Console.Clear ();
	    Leon l = new Leon ();
	      l.Grupo = "Mamiferos";
	      l.Nombre = "Leon";
	      l.NombreC = "Panthera leo";
	      l.Melena = "Su melena Color Marron";

	      Console.WriteLine ("Nombre Comun:" + l.Nombre);
	      Console.WriteLine ("Nombre Cientifico: " + l.NombreC);
	      Console.WriteLine ("Grupo: " + l.Grupo);
	      l.funcionesmamiferos ();
	      l.rugido ();
	      Console.WriteLine ("Distintivo de un leon :" + l.Melena);
	      Console.ReadKey ();
	      Console.WriteLine ("");

	    Lobo b = new Lobo ();
	      b.Grupo = "Mamiferos";
	      b.Nombre = "Lobo";
	      b.NombreC = "Canis lupus";
	      b.Sentido = "Tiene un gran sentido del olfato";

	      Console.WriteLine ("Nombre Comun:" + b.Nombre);
	      Console.WriteLine ("Nombre Cientifico: " + b.NombreC);
	      Console.WriteLine ("Grupo: " + b.Grupo);
	      b.funcionesmamiferos ();
	      b.aullido ();
	      Console.WriteLine ("Distintivo de un Lobo:" + b.Sentido);
	      Console.ReadKey ();
	      Console.WriteLine ("");

	    Alpaca c = new Alpaca ();
	      c.Grupo = "Mamiferos";
	      c.Nombre = "Alpaca";
	      c.NombreC = "Vicugna pacos";
	      c.Lana = "Poseen Lana";

	      Console.WriteLine ("Nombre Comun:" + c.Nombre);
	      Console.WriteLine ("Nombre Cientifico: " + c.NombreC);
	      Console.WriteLine ("Grupo: " + c.Grupo);
	      c.escupir ();
	      c.defensasdealpaca ();
	      Console.WriteLine ("Distintivo de una Alpaca: " + c.Lana);
	      Console.ReadKey ();
	      Console.WriteLine ("");
	      break;
	  }
	  case 2:
	  {
	    Console.Clear ();
	    Cuervo k = new Cuervo ();
	      k.Grupo = "Aves";
	      k.Nombre = "Corvo";
	      k.NombreC = "Corvus corax ";

	      Console.WriteLine ("Nombre Comun:" + k.Nombre);
	      Console.WriteLine ("Nombre Cientifico: " + k.NombreC);
	      Console.WriteLine ("Grupo: " + k.Grupo);
	      k.hablar ();
	      Console.ReadKey ();
	      Console.WriteLine ("");
         Guacamaya p = new Guacamaya();
          p.Grupo="Aves"; 
          p.Nombre="Guacamaya";
          p.NombreC="Ara macao"; 
         
          Console.WriteLine("Nombre Comun:"+p.Nombre);
          Console.WriteLine("Nombre Cientifico: "+p.NombreC);
          Console.WriteLine("Grupo: "+p.Grupo);
          p.pico();
          Console.ReadKey();
          Console.WriteLine("");
	      break;

	  }
	  case 3:
	  {
	      Console.Clear ();
	      AnguilaElectrica k = new AnguilaElectrica ();
	      k.Grupo = "Pez";
	      k.Nombre = "Anguila Electrica";
	      k.NombreC = "Electrophorus electricus";
	      k.Aleta=0;
	      
	      Console.WriteLine ("Nombre Comun:" + k.Nombre);
	      Console.WriteLine ("Nombre Cientifico: " + k.NombreC);
	      Console.WriteLine ("Grupo: " + k.Grupo);
	      Console.WriteLine("Numero de Aletas: "+k.Aleta);
	      k.Elctriciad();
	      Console.ReadKey ();
	      Console.WriteLine ("");
          
          PezGlobo p = new PezGlobo();
          p.Grupo="Aves"; 
          p.Nombre="Pez Globo";
          p.NombreC="Arothron nigropunctatus"; 
          p.Aleta=2;
          Console.WriteLine("Nombre Comun:"+p.Nombre);
          Console.WriteLine("Nombre Cientifico: "+p.NombreC);
          Console.WriteLine("Grupo: "+p.Grupo);
          Console.WriteLine("Numero de Aletas: "+p.Aleta);
          p.Picotazovenenozo();
          Console.ReadKey();
          Console.WriteLine("");
	    
	    
	    break;
	  }
	default:
	  break;
	}

    }
  }
}
