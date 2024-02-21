// SPDX-FileCopyrightText: 2022-2024 Geoffrey D. Bennett <g@b4.vu>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "about.h"

#include <libintl.h>
#define _(String) gettext (String)

void activate_about(
  GSimpleAction *action,
  GVariant      *parameter,
  gpointer       data
) {
  GtkWindow *w = GTK_WINDOW(data);

  const char *authors[] = {
    _("Geoffrey D. Bennett"),
    NULL
  };

  gtk_show_about_dialog(
    w,
    "program-name", _("ALSA Scarlett2 Control Panel"),
    "version", "Version " VERSION,
    "comments", _("GTK4 interface to the ALSA Scarlett and Clarett Mixer controls"),
    "website", "https://github.com/geoffreybennett/alsa-scarlett-gui",
    "copyright", _("Copyright 2022-2024 Geoffrey D. Bennett"),
    "license-type", GTK_LICENSE_GPL_3_0,
    "logo-icon-name", "alsa-scarlett-gui-logo",
    "title", _("About ALSA Scarlett2 Mixer Interface"),
    "authors", authors,
    NULL
  );
}
