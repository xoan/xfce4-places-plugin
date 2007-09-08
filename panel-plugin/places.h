/*  xfce4-places-plugin
 *
 *  Copyright (c) 2007 Diego Ongaro <ongardie@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _XFCE_PANEL_PLACES_H
#define _XFCE_PANEL_PLACES_H

#include <gtk/gtk.h>
#include <libxfce4panel/xfce-panel-plugin.h>

typedef struct _PlacesData PlacesData;
#include "cfg.h"

#define PLUGIN_NAME "places"

struct _PlacesData
{
  /* plugin */
  XfcePanelPlugin   *plugin;

  /* configuration */
  PlacesConfig      *cfg;

  /* view */
  GtkWidget         *view_button;
  GtkWidget         *view_button_box;
  GtkWidget         *view_button_image;
  GtkWidget         *view_button_label;
  GtkWidget         *view_menu;
  GtkTooltips       *view_tooltips;
  gboolean           view_needs_separator;
  guint              view_menu_timeout_id;

  /* model */
  GList *bookmark_groups;
};

void places_load_thunar(const gchar *path);
void places_load_terminal(const gchar *path);
void places_load_file(const gchar *path);
void places_gui_exec(const gchar *cmd);


#endif
/* vim: set ai et tabstop=4: */
