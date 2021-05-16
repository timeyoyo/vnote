#include "quickaccesspage.h"

#include <widgets/widgetsfactory.h>
#include <core/sessionconfig.h>
#include <core/coreconfig.h>
#include <core/configmgr.h>
#include <utils/widgetutils.h>

using namespace vnotex;

QuickAccessPage::QuickAccessPage(QWidget *p_parent)
    : SettingsPage(p_parent)
{
    setupUI();
}

void QuickAccessPage::setupUI()
{

}

void QuickAccessPage::loadInternal()
{
}

void QuickAccessPage::saveInternal()
{

}

QString QuickAccessPage::title() const
{
    return tr("Quick Access");
}
