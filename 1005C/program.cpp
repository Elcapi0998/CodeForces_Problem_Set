#include<iostream>
#include<map>
#include<math.h>

using namespace std;

int main(){
	map<int,int> arr;
    int n, ans=0;
    cin>>n;
    int vec[n];
    //cout<<"hola"<<endl;
    for (int i = 0; i < n; i++)
    {
        //cout<<"hola adentro"<<endl;
        int aux;
        cin>>aux;//se guardan los datos en un arreglo
        vec[i]=aux;
        arr[aux]=arr[aux]+1;//se guardan las repeticiones de cada uno de los valores
        //cout<<"hola"<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        bool noencontrado=true;
        for (int j = 0; j <=30; ++j)
        {
            long int s=pow(2,j)-vec[i];//es la diferencia que se necesita para tener una suam equivalente a un apotencia de dos
            if (arr.count(s)==1 && (arr[s]>=2 || (arr[s]==1 && s!=vec[i])))//se checa que el complemento este en el map, 
                //como el complemento puede ser el mismo número, es necesario validar que el caso en que si solo existe una repetición,
                //no puede ser el mismo número, pues no hay otro número que lo complemente
            {
                noencontrado=false;
            }
        }
        if (noencontrado)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}