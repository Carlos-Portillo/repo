#include <iostream>
#include "heap.hpp"

using namespace std;

struct CharCode
{
    std::string ch;
    string code;
};

void encode(Node *root, string str, CharCode *huffmanCode, int &index)
{
    if (root == nullptr)
        return;

    if (!root->left && !root->right)
    {
        huffmanCode[index++] = {root->ch, str};
    }

    encode(root->left, str + "0", huffmanCode, index);
    encode(root->right, str + "1", huffmanCode, index);
}

void buildHuffmanTree(MinHeap &minHeap, CharCode *huffmanCode)
{
    while (minHeap.getSize() > 1)
    {
        Node *left = minHeap.extractMin();
        Node *right = minHeap.extractMin();

        double sum = left->prob + right->prob;  // Cambio de int a double
        minHeap.insert(new Node{"\0", sum, left, right});
    }

    Node *root = minHeap.extractMin();

    int index = 0;
    encode(root, "", huffmanCode, index);

    cout << "Huffman Codes are :\n"
         << '\n';
    for (int i = 0; i < index; ++i)
    {
        cout << huffmanCode[i].ch << " " << huffmanCode[i].code << '\n';
    }
}

void codificarPalabra(const CharCode *huffmanCode, int huffmanCodeSize)
{
    // Pregunta al usuario por una palabra con caracteres árabes
    cout << "Ingrese una palabra con caracteres árabes: ";
    string palabra;
    getline(cin, palabra);

    // Codifica la palabra ingresada
    string textoCodificado;
    size_t longitudCaracterArabe = 2; // Longitud esperada de un carácter árabe en formato "\uXXXX"

    for (size_t i = 0; i < palabra.size(); i += longitudCaracterArabe)
    {
        // Extrae el carácter árabe completo
        string caracterArabe = palabra.substr(i, longitudCaracterArabe);

        // Realiza la comparación y concatena el código correspondiente
        for (int j = 0; j < huffmanCodeSize; ++j)
        {
            if (huffmanCode[j].ch == caracterArabe)
            {
                textoCodificado += huffmanCode[j].code;
                break;
            }
        }
    }

    // Imprime el texto codificado
    cout << "Texto codificado: " << textoCodificado << endl;
}

int main()
{
    // Crear nodos independientes
    Node *nodeA = new Node{"\u0627", 0.29, nullptr, nullptr};  // Cambio de int a double
    Node *nodeB = new Node{"\u0628", 0.18, nullptr, nullptr};  // Cambio de int a double
    Node *nodeC = new Node{"\u062A", 0.50, nullptr, nullptr};  // Cambio de int a double
    Node *nodeD = new Node{"\u062B", 0.37, nullptr, nullptr};  // Cambio de int a double
    Node *nodeE = new Node{"\u062C", 0.72, nullptr, nullptr};  // Cambio de int a double
    Node *nodeF = new Node{"\u062D", 0.51, nullptr, nullptr};  // Cambio de int a double
    Node *nodeG = new Node{"\u062E", 0.23, nullptr, nullptr};  // Cambio de int a double
    Node *nodeH = new Node{"\u062F", 0.40, nullptr, nullptr};  // Cambio de int a double
    Node *nodeI = new Node{"\u0630", 0.71, nullptr, nullptr};  // Cambio de int a double
    Node *nodeJ = new Node{"\u0631", 0.66, nullptr, nullptr};  // Cambio de int a double
    Node *nodeK = new Node{"\u0632", 0.12, nullptr, nullptr};  // Cambio de int a double
    Node *nodeL = new Node{"\u0633", 0.55, nullptr, nullptr};  // Cambio de int a double
    Node *nodeM = new Node{"\u0634", 0.67, nullptr, nullptr};  // Cambio de int a double
    Node *nodeN = new Node{"\u0635", 0.37, nullptr, nullptr};  // Cambio de int a double
    Node *nodeEnie = new Node{"\u0636", 0.20, nullptr, nullptr};  // Cambio de int a double
    Node *nodeO = new Node{"\u0637", 0.09, nullptr, nullptr};  // Cambio de int a double
    Node *nodeP = new Node{"\u0638", 0.35, nullptr, nullptr};  // Cambio de int a double
    Node *nodeQ = new Node{"\u0639", 0.31, nullptr, nullptr};  // Cambio de int a double
    Node *nodeR = new Node{"\u063A", 0.77, nullptr, nullptr};  // Cambio de int a double
    Node *nodeS = new Node{"\u0641", 0.94, nullptr, nullptr};  // Cambio de int a double
    Node *nodeT = new Node{"\u0642", 0.19, nullptr, nullptr};  // Cambio de int a double
    Node *nodeU = new Node{"\u0643", 0.66, nullptr, nullptr};  // Cambio de int a double
    Node *nodeV = new Node{"\u0644", 0.81, nullptr, nullptr};  // Cambio de int a double
    Node *nodeW = new Node{"\u0646", 0.34, nullptr, nullptr};  // Cambio de int a double
    Node *nodeX = new Node{"\u0647", 0.22, nullptr, nullptr};  // Cambio de int a double
    Node *nodeY = new Node{"\u0648", 0.56, nullptr, nullptr};  // Cambio de int a double
    Node *nodeZ = new Node{"\u064A", 0.04, nullptr, nullptr};  // Cambio de int a double

    // Crear el montículo e insertar los nodos
    MinHeap minHeap;
    minHeap.insert(nodeA);
    minHeap.insert(nodeB);
    minHeap.insert(nodeC);
    minHeap.insert(nodeD);
    minHeap.insert(nodeE);
    minHeap.insert(nodeF);
    minHeap.insert(nodeG);
    minHeap.insert(nodeH);
    minHeap.insert(nodeI);
    minHeap.insert(nodeJ);
    minHeap.insert(nodeK);
    minHeap.insert(nodeL);
    minHeap.insert(nodeM);
    minHeap.insert(nodeN);
    minHeap.insert(nodeEnie);
    minHeap.insert(nodeO);
    minHeap.insert(nodeP);
    minHeap.insert(nodeQ);
    minHeap.insert(nodeR);
    minHeap.insert(nodeS);
    minHeap.insert(nodeT);
    minHeap.insert(nodeU);
    minHeap.insert(nodeV);
    minHeap.insert(nodeW);
    minHeap.insert(nodeX);
    minHeap.insert(nodeY);
    minHeap.insert(nodeZ);

    CharCode huffmanCode[100]; // Asumiendo un máximo de 100 caracteres

    buildHuffmanTree(minHeap, huffmanCode);

    // Aquí se puede llamar esta función para codificar. Lo haremos en la ETAPA V
    codificarPalabra(huffmanCode, 27);

    return 0;
}
