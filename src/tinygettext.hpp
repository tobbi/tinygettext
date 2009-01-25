//  $Id$
//
//  TinyGetText
//  Copyright (C) 2006 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_TINYGETTEXT_H
#define HEADER_TINYGETTEXT_H

#include <fstream>
#include "dictionary_manager.hpp"

namespace tinygettext {

class Dictionary;

/** Convert \a which is in \a from_charset to \a to_charset and return it */
std::string convert(const std::string& text,
                    const std::string& from_charset,
                    const std::string& to_charset);

bool has_suffix(const std::string& lhs, const std::string rhs);
bool has_prefix(const std::string& lhs, const std::string rhs);

/** Read the content of the .po file given as \a in into the
    dictionary given as \a dict */
void read_po_file(Dictionary& dict, std::istream& in);

} // namespace tinygettext

#endif

/* EOF */