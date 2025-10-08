/****************************************************************************
** Copyright (c) 2021, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#include "property_builtins.h"

#include "tkernel_utils.h"

namespace Bohdan {

BasePropertyQuantity::BasePropertyQuantity(PropertyGroup* grp, const TextId& name)
    : Property(grp, name)
{
}

template<> const char PropertyBool::TypeName[] = "Bohdan::PropertyBool";
template<> const char GenericProperty<int>::TypeName[] = "Bohdan::PropertyInt";
template<> const char GenericProperty<double>::TypeName[] = "Bohdan::PropertyDouble";
template<> const char PropertyString::TypeName[] = "Bohdan::PropertyString";
template<> const char GenericProperty<CheckState>::TypeName[] = "Bohdan::PropertyCheckState";
template<> const char PropertyOccPnt::TypeName[] = "Bohdan::PropertyOccPnt";
template<> const char PropertyOccVec::TypeName[] = "Bohdan::PropertyOccVec";
template<> const char PropertyOccTrsf::TypeName[] = "Bohdan::PropertyOccTrsf";
template<> const char GenericProperty<Quantity_Color>::TypeName[] = "Bohdan::PropertyOccColor";
template<> const char GenericProperty<FilePath>::TypeName[] = "Bohdan::PropertyFilePath";

} // namespace Bohdan
