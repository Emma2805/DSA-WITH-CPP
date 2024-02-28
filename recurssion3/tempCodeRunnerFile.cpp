
void reverse(string &str,int i, int j){
    //base case
    if(i>j){
        return ;
    }

    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}