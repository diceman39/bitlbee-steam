/*
 * Copyright 2012-2013 James Geboski <jgeboski@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _STEAM_H
#define _STEAM_H

#include <bitlbee.h>

#include "steam-api.h"

typedef struct _SteamData SteamData;

struct _SteamData
{
    SteamApi *api;
    struct im_connection *ic;

    gint64 tstamp;

    gboolean game_status;
    gint     show_playing;
};


SteamData *steam_data_new(account_t *acc);

void steam_data_free(SteamData *sd);

#endif /* _STEAM_H */
