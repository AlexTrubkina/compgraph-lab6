// Файл html_escape.cpp
#include <QTextStream>
#include <QFile>
 
int main() {
    
    QTextStream out(stdout);
 
    QFile file("cprog.c");
  
    if (!file.open(QIODevice::ReadOnly)) {
      
        qWarning("Cannot open file for reading");
        return 1;
    }
 
    QTextStream in(&file);
 
    QString allText = in.readAll();    
    out << allText.toHtmlEscaped() << endl;
 
    file.close();
    
    return 0;
}
