bool isPalindrome(char* s) {
    
    int left=0;
    int right=strlen(s)-1;
    while(left<right){
        if(!isalnum((unsigned char)s[left])){
        left+=1;
        }
        else if (!isalnum((unsigned char)s[right])){
        right-=1;
        }
        else if(tolower((unsigned char)s[left])!=tolower((unsigned char)s[right])){
            return false;
        }
        else{
            left+=1;
            right-=1;
        }
    }
    
        return true;
    }


    
