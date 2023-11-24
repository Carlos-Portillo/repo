#include <iostream>
#include "heap.hpp"

int main()
{
     // Crear nodos independientes
    Node *nodeA = new Node{"\u0627", 0.1, nullptr, nullptr};  // Cambio de int a double
    Node *nodeB = new Node{"\u0628", 0.3, nullptr, nullptr};  // Cambio de int a double
    Node *nodeC = new Node{"\u062A", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeD = new Node{"\u062B", 0.1, nullptr, nullptr};  // Cambio de int a double
    Node *nodeE = new Node{"\u062C", 0.3, nullptr, nullptr};  // Cambio de int a double
    Node *nodeF = new Node{"\u062D", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeG = new Node{"\u062E", 0.1, nullptr, nullptr};  // Cambio de int a double
    Node *nodeH = new Node{"\u062F", 0.3, nullptr, nullptr};  // Cambio de int a double
    Node *nodeI = new Node{"\u0630", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeJ = new Node{"\u0631", 0.1, nullptr, nullptr};  // Cambio de int a double
    Node *nodeK = new Node{"\u0632", 0.3, nullptr, nullptr};  // Cambio de int a double
    Node *nodeL = new Node{"\u0633", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeM = new Node{"\u0634", 0.1, nullptr, nullptr};  // Cambio de int a double
    Node *nodeN = new Node{"\u0635", 0.3, nullptr, nullptr};  // Cambio de int a double
    Node *nodeEnie = new Node{"\u0636", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeO = new Node{"\u0637", 0.1, nullptr, nullptr};  // Cambio de int a double
    Node *nodeP = new Node{"\u0638", 0.3, nullptr, nullptr};  // Cambio de int a double
    Node *nodeQ = new Node{"\u0639", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeR = new Node{"\u063A", 0.1, nullptr, nullptr};  // Cambio de int a double
    Node *nodeS = new Node{"\u0641", 0.3, nullptr, nullptr};  // Cambio de int a double
    Node *nodeT = new Node{"\u0642", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeU = new Node{"\u0643", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeV = new Node{"\u0644", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeW = new Node{"\u0646", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeX = new Node{"\u0647", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeY = new Node{"\u0648", 0.7, nullptr, nullptr};  // Cambio de int a double
    Node *nodeZ = new Node{"\u064A", 0.7, nullptr, nullptr};  // Cambio de int a double

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


    // Mostrar el tamaño del montículo
    std::cout << "Tamano del monticulo: " << minHeap.getSize() << std::endl;

    // Extraer el nodo con la frecuencia mínima
    Node *minNode = minHeap.extractMin();

    // Mostrar la información del nodo extraído
    std::cout << "Nodo extrado: " << minNode->ch << " " << minNode->prob << std::endl;

    // Liberar memoria de los nodos
    delete nodeA;
    delete nodeB;
    delete nodeC;

    return 0;
}
