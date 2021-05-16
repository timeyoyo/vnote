#include "locationinputwithbrowsebutton.h"

#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>

#include <widgets/widgetsfactory.h>

using namespace vnotex;

LocationInputWithBrowseButton::LocationInputWithBrowseButton(QWidget *p_parent)
    : QWidget(p_parent)
{
    auto layout = new QHBoxLayout(this);

    m_lineEdit = WidgetsFactory::createLineEdit(this);
    layout->addWidget(m_lineEdit, 1);

    auto browseBtn = new QPushButton(tr("Browse"), this);
    layout->addWidget(browseBtn);
    connect(browseBtn, &QPushButton::clicked,
            this, &LocationInputWithBrowseButton::clicked);
}

QString LocationInputWithBrowseButton::text() const
{
    return m_lineEdit->text();
}

void LocationInputWithBrowseButton::setText(const QString &p_text)
{
    m_lineEdit->setText(p_text);
}
