#include <iostream>
using namespace std;

int hammingDistance(string dna1, string dna2){

    if(dna1.length() != dna2.length()){
        cout<<"Error: cadenas de diferente longitud"<<endl;
        return -1;
    }

    int distance = 0;

    for(int i=0;i<dna1.length();i++){
        if(dna1[i] != dna2[i])
            distance++;
    }

    return distance;
}

int main(){

    string dna1 = "GAGCCTACTAACGGGAT";
    string dna2 = "CATCGTAATGACGGCCT";

    cout<<"Hamming distance: "<<hammingDistance(dna1,dna2)<<endl;

}