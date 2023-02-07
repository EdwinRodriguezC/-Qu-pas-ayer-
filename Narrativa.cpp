#include <iostream>

using namespace std; 

int jugador; 
int eleccion; 


int main(){

    cout << "BIENVENIDO AL JUEGO"<< endl; 
    cout << "¿Qué pasó ayer?" << endl;

    cout << "Elige a tu jugador" << endl;

    cout << "1. Phil" << endl; 
    cout << "2. Alan" << endl;
    cout << "3. Stuart" << endl; 
    cout << "4. Doug" << endl;  

     

    std:string playName;
    cin >> jugador; 
    
    if(jugador == 1){
        cout << "Hola Phil" << endl;
        cout << "Saluda a Phil 👋" << endl;
        
         
    } 
    else if (jugador == 2) //Bug en el dos 
    {
        cout << "Este no es el Caesars Palace original. ¿El César vivió aquí?" << endl;
        cout << "Contesta la pregunta de Alan 🤣 " << endl;
        cout << "1 = SI, 2 = NO" << endl;
        
         
    }
    else if (jugador == 3)
    {
        cout << "Hello Sturat, ¿Donde compraste tu sueter? " << endl; 
        cout << "Dile donde lo compraste" << endl;
        cin >> playName;
        cout << "Te queda muy bien 😉" << endl; 
        
         
    }
    else if (jugador == 4)
    {
        cout << "¿Se me cayó un 🦷?" << endl; 
        cout << "1 = SI, 2 = NO" << endl;
    }else {
        cout << "Elige un jugador🥲";  
    }
    std::cin >> playName; 
    

    cout << "¡Oh no! Te despiertas con un fuerte dolor de cabeza, al voltear a ver a tu alrrededor te das cuenta que nada te resulta familiar," << endl; 
    cout <<  "estás en un sucio cuarto desconocido, lo único que alcanzas a notar son una ventana, un escusado, un pato de hule y una puerta. " << endl; 

    cout << "¿A cual decides ir primero?" << endl; 
    cout << "1. Ir hacia la ventana" << endl;
    cout << "2. Ir hacia el escusado" << endl;
    cout << "3. Tomar el pato de hule" << endl;
    cout << "4. Ir hacia la puerta" << endl; 
    cin >> eleccion; 
    
    if (eleccion == 1){
        cout << "Debiste de tener más cuidado haz muerto porque te caíste en caida libre desde el piso 33" ; 
    } else if (eleccion == 2)
    {
        cout << "Un tigre de véngala estaba adentro y te ha comido. :(" ;
    } else if (eleccion == 3)
    {
         cout << "FELICIDADES, haz encontrado la llave del cuarto del apartamento y haz logrado salir sano y salvo!!" ;
    }else if (eleccion == 4)
    {
        cout << "Solo encontraste a Chao desnudo";
    }else {
        cout << "Escibre una condicion que sea válida ";
    }    
}
