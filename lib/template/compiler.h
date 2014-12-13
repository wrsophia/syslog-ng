/*
 * Copyright (c) 2002-2014 BalaBit IT Ltd, Budapest, Hungary
 * Copyright (c) 1998-2014 Balázs Scheidler
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */

#ifndef TEMPLATE_COMPILER_H_INCLUDED
#define TEMPLATE_COMPILER_H_INCLUDED

#include "syslog-ng.h"

typedef struct _LogTemplate LogTemplate;

typedef struct
{
  LogTemplate *template;
  GList *result;
  gchar *cursor;
  GString *text;
  gint msg_ref;
} LogTemplateCompiler;

gboolean log_template_compiler_compile(LogTemplateCompiler *self, GList **compiled_template, GError **error);
void log_template_compiler_init(LogTemplateCompiler *self, LogTemplate *template);
void log_template_compiler_clear(LogTemplateCompiler *self);


#endif