if(x2==x1 && y2==y1){
        c[x2][y2]='#';
        r=1;
        return;
    }
    srandom(time(NULL));
    long long int o;
    if(x2>=x1 && y2>=y1){
        usleep(100000);     
        o=random();
        if(o%7==0 || o%7==2 || o%7==4 || o%7==6){
            if((c[x2-1][y2]==' '||c[x2-1][y2]=='#') && x2-1>=0){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2-1,y2,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }

            if((c[x2][y2-1]==' ' || c[x2][y2-1]=='#') && y2-1>=0){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2,y2-1,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }
        }
        else{
            if((c[x2][y2-1]==' ' || c[x2][y2-1]=='#') && y2-1>=0){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2,y2-1,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }

            if((c[x2-1][y2]==' ' || c[x2-1][y2]=='#') && x2-1>=0){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2-1,y2,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }
        }
        if(c[x2][y2]!='#'){
            c[x2][y2]='a';}
        return;
        
    }
    if(x2>=x1 && y2<=y1){
        usleep(100000);
        o=random();
        if(o%7==1 || o%7==3 || o%7==5){
            if((c[x2-1][y2]==' ' || c[x2-1][y2]=='#') && x2-1>=0){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2-1,y2,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }

            if((c[x2][y2+1]==' ' || c[x2][y2+1]=='#') && y2+1<=y){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2,y2+1,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }
        }
        else{
            if((c[x2][y2+1]==' ' || c[x2][y2+1]=='#') && y2+1<=y){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2,y2+1,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }

            if((c[x2-1][y2]==' ' || c[x2-1][y2]=='#') && x2-1>=0){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2-1,y2,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }
        }
        if(c[x2][y2]!='#'){
            c[x2][y2]='a';}
        return;
        
    }
    if(x2<=x1 && y2>=y1){
        usleep(10000);
        o=random();
        if(o%7==0 || o%7==2 || o%7==4 || o%7==6){
            if((c[x2+1][y2]==' ' || c[x2+1][y2]=='#') && x2+1<=x){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2+1,y2,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }

            if((c[x2][y2-1]==' ' || c[x2][y2-1]=='#') && y2-1>=0){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2,y2-1,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }
        }
        else{
            if((c[x2][y2-1]==' ' || c[x2][y2-1]=='#') && y2-1>=0){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2,y2-1,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }

            if((c[x2+1][y2]==' '|| c[x2+1][y2]=='#') && x2+1<=x){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2+1,y2,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }
        }
        if(c[x2][y2]!='#'){
            c[x2][y2]='a';}
        return;
        
    }
    if(x2<=x1 && y2<=y1){
        usleep(10000);
        o=random();
        if(o%7==1 || o%7==3 || o%7==5){
            if((c[x2+1][y2]==' ' || c[x2+1][y2]=='#') && x2+1<=x){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2+1,y2,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }

            if((c[x2][y2+1]==' ' || c[x2+1][y2]=='#') && y2+1<=y){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2,y2+1,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }
        }
        else{
            if((c[x2][y2+1]==' ' || c[x2][y2+1]=='#') && y2+1<=y){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2,y2+1,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }

            if((c[x2+1][y2]==' ' || c[x2+1][y2]=='#') && x2+1<=x){
                if(c[x2][y2]!='#'){
                c[x2][y2]='a';}
                Buildhall(x2+1,y2,x1,y1,x,y,c);
            }
            if(r==1){
                c[x2][y2]='#';
                return;
            }
        }
        if(c[x2][y2]!='#'){
            c[x2][y2]='a';}
        return;
        
    }
    if(x2==x1 && y2==y1){
        c[x1][y1]='#';
        return;
      }

    if(x2>=x1 && y2>=y1){
        if(c[x2][y2]=='|'){
            c[x2][y2]='+';
            Buildhall(x2-1,y2,x1,y1,x,y,c);
            return;
        }
        if(c[x2][y2]=='_'){
            c[x2][y2]='+';
            Buildhall(x2,y2-1,x1,y1,x,y,c);
            return;
        }
        // if(c[x2][y2]=='+' && (c[x2][y2-1]!=' ' || c[x2][y2+1]!=' ')){
        //     // c[x2][y2]='a';
        //     Buildhall(x2-1,y2,x1,y1,x,y,c);
        //     return;
        // }
        // if(c[x2][y2]=='+' && (c[x2-1][y2]!=' ' || c[x2+1][y2]!=' ')){
        //     c[x2][y2]='a';
        //     Buildhall(x2,y2-1,x1,y1,x,y,c);
        //     return;
        // }
        if((c[x2][y2]==' ' || c[x2][y2]=='.' || c[x2][y2]=='#' || c[x2][y2]=='+') ){
            srandom(time(NULL));
            usleep(100000);
            int m=random()%7;
            if(m==0 || m==2 || m==4 || m==6 ){

                if(c[x2][y2]==' '){
                c[x2][y2]='#';}

                if(x2-1>=0){
                Buildhall(x2-1,y2,x1,y1,x,y,c);
                return;}
                else{
                    Buildhall(x2,y2-1,x1,y1,x,y,c);
                    return;
                }
            }
            if(m==1 || m==3 || m==5 ){

                if(c[x2][y2]==' '){
                c[x2][y2]='#';}

                if(y2-1>=0){
                Buildhall(x2,y2-1,x1,y1,x,y,c);
                return;}
                else{
                    Buildhall(x2-1,y2,x1,y1,x,y,c);
                    return;
                }
            }
        }

    }

    if(x2>=x1 && y2<=y1){
        if(c[x2][y2]=='|'){
            c[x2][y2]='+';
            Buildhall(x2-1,y2,x1,y1,x,y,c);
            return;
        }
        if(c[x2][y2]=='_'){
            c[x2][y2]='+';
            Buildhall(x2,y2+1,x1,y1,x,y,c);
            return;
        }
        // if(c[x2][y2]=='+' && (c[x2][y2-1]!=' ' || c[x2][y2+1]!=' ')){
        //     Buildhall(x2-1,y2,x1,y1,x,y,c);
        //     return;
        // }
        // if(c[x2][y2]=='+' && (c[x2-1][y2]!=' ' || c[x2+1][y2]!=' ')){
        //     Buildhall(x2,y2+1,x1,y1,x,y,c);
        //     return;
        // }
        if(c[x2][y2]==' ' || c[x2][y2]=='.' || c[x2][y2]=='#' || c[x2][y2]=='+'){
            srandom(time(NULL));
            usleep(100000);
            int m=random()%7;
            if((m==0 || m==2 || m==4 || m==6)){

                if(c[x2][y2]==' '){
                c[x2][y2]='#';}
                
                if(y2+1<=y){
                Buildhall(x2,y2+1,x1,y1,x,y,c);
                return;}
                else{
                    Buildhall(x2-1,y2,x1,y1,x,y,c);
                    return;
                }
            }
            if((m==1 || m==3 || m==5)){

                if(c[x2][y2]==' '){
                c[x2][y2]='#';}
                
                if(x2-1>=0){
                Buildhall(x2-1,y2,x1,y1,x,y,c);
                return;}
                else{
                    Buildhall(x2,y2+1,x1,y1,x,y,c);
                }
            }
        }

    }

    if(x2<=x1 && y2>=y1){
        if(c[x2][y2]=='|'){
            c[x2][y2]='+';
            Buildhall(x2+1,y2,x1,y1,x,y,c);
            return;
        }
        if(c[x2][y2]=='_'){
            c[x2][y2]='+';
            Buildhall(x2,y2-1,x1,y1,x,y,c);
            return;
        }
        // if(c[x2][y2]=='+' && (c[x2][y2-1]!=' ' || c[x2][y2+1]!=' ')){
        //     Buildhall(x2+1,y2,x1,y1,x,y,c);
        //     return;
        // }
        // if(c[x2][y2]=='+' && (c[x2-1][y2]!=' ' || c[x2+1][y2]!=' ')){
        //     Buildhall(x2,y2-1,x1,y1,x,y,c);
        //     return;
        // }
        if((c[x2][y2]==' ' || c[x2][y2]=='.' || c[x2][y2]=='#' || c[x2][y2]=='+')){
            srandom(time(NULL));
            usleep(100000);
            int m=random()%7;
            if((m==0 || m==2 || m==4 || m==6)){

                if(c[x2][y2]==' '){
                c[x2][y2]='#';}
                
                if(x2+1<=x){
                Buildhall(x2+1,y2,x1,y1,x,y,c);
                return;}
                else{
                    Buildhall(x2,y2-1,x1,y1,x,y,c);
                    return;
                }
            }
            if((m==1 || m==3 || m==5)){

                if(c[x2][y2]==' '){
                c[x2][y2]='#';}

                if(y2-1>=0){
                Buildhall(x2,y2-1,x1,y1,x,y,c);
                return;}
                else{
                    Buildhall(x2+1,y2,x1,y1,x,y,c);
                    return;
                }
            }
        }

    }

    if(x2<=x1 && y2<=y1){
        if(c[x2][y2]=='|'){
            c[x2][y2]='+';
            Buildhall(x2+1,y2,x1,y1,x,y,c);
            return;
        }
        if(c[x2][y2]=='_'){
            c[x2][y2]='+';
            Buildhall(x2,y2+1,x1,y1,x,y,c);
            return;
        }
        // if(c[x2][y2]=='+' && (c[x2][y2-1]!=' ' || c[x2][y2+1]!=' ')){
        //     Buildhall(x2+1,y2,x1,y1,x,y,c);
        //     return;
        // }
        // if(c[x2][y2]=='+' && (c[x2-1][y2]!=' ' || c[x2+1][y2]!=' ')){
        //     Buildhall(x2,y2+1,x1,y1,x,y,c);
        //     return;
        // }
        if((c[x2][y2]==' ' || c[x2][y2]=='.' || c[x2][y2]=='#' || c[x2][y2]=='+')){
            srandom(time(NULL));
            usleep(100000);
            int m=random()%7;
            if(m==0 || m==2 || m==4 || m==6){

                if(c[x2][y2]==' '){
                c[x2][y2]='#';}
                
                if(y2+1<=y){
                Buildhall(x2,y2+1,x1,y1,x,y,c);
                return;}
                else{
                    Buildhall(x2+1,y2,x1,y1,x,y,c);
                    return;
                }
            }
            if(m==1 || m==3 || m==5){

                if(c[x2][y2]==' '){
                c[x2][y2]='#';}

                if(x2+1<=x){
                Buildhall(x2+1,y2,x1,y1,x,y,c);
                return;}
                else{
                    Buildhall(x2,y2+1,x1,y1,x,y,c);
                    return;
                }
            }
        }

    }