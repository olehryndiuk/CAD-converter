/****************************************************************************
** Copyright (c) 2021, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#pragma once

#include "occ_handle.h"
#include <TDocStd_Document.hxx>

namespace Bohdan {

class Document;
DEFINE_STANDARD_HANDLE(Document, TDocStd_Document)
using DocumentPtr = OccHandle<Document>;

} // namespace Bohdan
