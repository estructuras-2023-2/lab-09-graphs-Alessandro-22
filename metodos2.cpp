bool estanConectados(const string& a, const string& b) {
        return buscar(a) == buscar(b);
    }

    bool todosConectados(const vector<string>& ciudades) {
        if (ciudades.empty()) return true;
        string raiz = buscar(ciudades.front());
        for (const auto& ciudad : ciudades) {
            if (buscar(ciudad) != raiz) return false;
        }
        return true;
    }
