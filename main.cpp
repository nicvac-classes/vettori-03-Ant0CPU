#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, Imax;

    cout<<"Inseirire il numero di studenti che ci sono in una classe"<<endl;
    cin>>n;
    vector<string> nome(n);
    vector<float> voto(n);
    float vmax;

    for (i=0; i<=n-1; i++ ) {
        cout<<"Inserire il "<<i+1<<"° nome"<<endl;
        cin>>nome[i];

        cout<<"Inserire voto"<<endl;
        cin>>voto[i];
    }

    cout<<"Nomi: ";
    for (i=0; i<=n-1; i++ ) {
        cout<<nome[i]<<"; ";
    }

    cout<<" ";
    cout<<"Voti: ";
    for (i=0; i<=n-1; i++ ) {
        cout<<nome[i]<<"; ";
    }

    vmax=voto[0];
    for (i=0; i<=n-1; i++ ) {
        if (voto[i]>vmax) {
            vmax=voto[i];
            Imax=i;
        }
    }

    cout<<"Lo studente di nome "<<nome[Imax]<<" ha il voto più alto conseguendo una valutazione di "<<voto[Imax]<<endl;
}

