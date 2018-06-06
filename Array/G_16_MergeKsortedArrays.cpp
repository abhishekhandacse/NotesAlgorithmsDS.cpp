int *mergeKArrays(int arr[][N], int k){
    int *aux=new int[k*k];
    
        int counter=0;
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                aux[counter]=arr[i][j];
                counter++;
            }
        }
        sort(aux,aux+(k*k));
        return aux;
}
// Geeks accepted solution