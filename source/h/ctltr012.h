/*
    This file is part of the Dynarithmic TWAIN Library (DTWAIN).
    Copyright (c) 2002-2019 Dynarithmic Software.

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
#ifndef CTLTR012_H_
#define CTLTR012_H_

#include "ctltr011.h"

namespace dynarithmic
{
    class CTL_CapabilityGetEnumTriplet : public CTL_CapabilityGetTriplet
    {
        public:
            CTL_CapabilityGetEnumTriplet(CTL_ITwainSession *pSession,
                                         CTL_ITwainSource *pSource,
                                         CTL_EnumGetType   gType,
                                         TW_UINT16         gCap,
                                         TW_UINT16 TwainDataType=0xFFFF);

            size_t  GetNumItems();
            bool GetValue(void *pData, size_t nWhere);

        protected:
            virtual bool EnumCapValues( void *pCapData );

        private:
            size_t     m_nNumItems;
    };
}
#endif
