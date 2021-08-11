bool func(char op[], int size){
    int i = 0, j = 0;
    for(int k = 0; k < size; k++) {
        switch(op[k]) {
            case 'I': {
                i++;
                break;
            }
            case 'O': {
                j++;
                if(i < j) return false;
                break;
            }
            default:
                return false;
        }
    }
    return i == j;
}
