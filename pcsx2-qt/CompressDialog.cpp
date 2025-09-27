#include "CompressDialog.h"
#include <QLabel>
#include "zlib.h"




CompressDialog::CompressDialog(QWidget *parent, const QString &file_path)
    : QDialog(parent)
{
    m_ui.setupUi(this);

    m_ui.labelFilePath->setTextFormat(Qt::PlainText); 
    m_ui.labelFilePath->setTextInteractionFlags(Qt::TextSelectableByMouse); 
    m_ui.labelFilePath->setText(QDir::toNativeSeparators(file_path)); 

    unsigned int sector_size = 2048;
    unsigned int n = 2; // Where 2 is default sectors in a hunk
    unsigned int file_size; 
    unsigned int hunk_size = n * sector_size;
    
    unsigned int total = std::ceil(file_size/hunk_size);

    


}




CompressDialog::~CompressDialog() = default;