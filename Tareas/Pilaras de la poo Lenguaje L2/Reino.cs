public abstract class Reino 
{
  
  public string Grupo {get;set;}
  public string Nombre{get;set;}
  public string NombreC {get;set;}

  public Reino(string Grupo="Mamiferos",string Nombre="Nutria")//poliformismo
   {  
     
       
   }
    public Reino()//poliformismo
    {
       Grupo="Aracnidos";
       Nombre="Arana Lobo";
       
    }
      
    
}