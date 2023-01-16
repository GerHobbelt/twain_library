/*
This file is part of the Dynarithmic TWAIN Library (DTWAIN).
Copyright (c) 2002-2022 Dynarithmic Software.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

FOR ANY PART OF THE COVERED WORK IN WHICH THE COPYRIGHT IS OWNED BY
DYNARITHMIC SOFTWARE. DYNARITHMIC SOFTWARE DISCLAIMS THE WARRANTY OF NON INFRINGEMENT
OF THIRD PARTY RIGHTS.
*/

#ifndef DTWAIN_JOBCONTROL_OPTIONS_HPP
#define DTWAIN_JOBCONTROL_OPTIONS_HPP

#include <dynarithmic/twain/twain_values.hpp>

namespace dynarithmic
{
    namespace twain
    {
        class jobcontrol_options
        {
            friend class options_base;
            jobcontrol_value::value_type m_option;
            public:
                jobcontrol_options() : m_option(jobcontrol_value::none) {}
                jobcontrol_options& set_option(jobcontrol_value::value_type jm) { m_option = jm; return *this; }
                jobcontrol_value::value_type get_option() const { return m_option; }
        };
    }
}
#endif
