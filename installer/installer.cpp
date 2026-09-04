/*
Copyright 2026 Horizon-Velvet

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#include "installer.hpp"

#include <wx/wx.h>

namespace
{
    class InstallerApp final : public wxApp
    {
    public:
        bool OnInit() override
        {
            wxMessageBox(
                "Gyrfalcon Installer",
                "Gyrfalcon Compiler",
                wxOK | wxICON_INFORMATION
            );

            return false;
        }
    };

    wxIMPLEMENT_APP_NO_MAIN(InstallerApp);
}

namespace gyrfalcon::installer
{
    int run()
    {
        return wxEntry(
            0,
            nullptr
        );
    }
}
