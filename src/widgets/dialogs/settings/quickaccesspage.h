#ifndef QUICKACCESSPAGE_H
#define QUICKACCESSPAGE_H

#include "settingspage.h"

namespace vnotex
{
    class QuickAccessPage : public SettingsPage
    {
        Q_OBJECT
    public:
        explicit QuickAccessPage(QWidget *p_parent = nullptr);

        QString title() const Q_DECL_OVERRIDE;

    protected:
        void loadInternal() Q_DECL_OVERRIDE;

        void saveInternal() Q_DECL_OVERRIDE;

    private:
        void setupUI();
    };
}

#endif // QUICKACCESSPAGE_H
