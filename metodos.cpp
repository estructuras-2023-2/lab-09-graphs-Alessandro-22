  void unir(const string& a, const string& b) {
        string raizA = buscar(a);
        string raizB = buscar(b);
        if (raizA != raizB)
            padre[raizA] = raizB;
    }


string buscar(const string& s) {
        
        if (padre[s] != s)
            padre[s] = buscar(padre[s]);
        else if (padre.find(s) == padre.end())
             padre[s] = s;
        return padre[s];
    }
