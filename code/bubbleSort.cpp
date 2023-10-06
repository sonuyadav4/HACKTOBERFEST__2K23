void bubble(vector<int>&v){
for(int i=0;i<v.size();i++){
    for(int j=0;j<v.size()-1-i;j++){
        if(v[j+1]<v[j]){
            swap(v[j],v[j+1]);
        }
    }
 }
}
