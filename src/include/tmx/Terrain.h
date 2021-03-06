/*
 * Copyright (c) 2013-2014, Julien Bernard
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
#ifndef TMX_TERRAIN_H
#define TMX_TERRAIN_H

#include <string>

#include "Base.h"

namespace tmx {

  /**
   * @brief A terrain describes a kind of terrain on the map.
   */
  class Terrain : public Base {
  public:
    /**
     * @brief Terrain constructor.
     */
    Terrain(const std::string& name, unsigned tile)
      : m_name(name), m_tile(tile)
    {
    }

    /**
     * @brief Get the name of the terrain.
     *
     * @returns the name of the terrain
     */
    const std::string& getName() const {
      return m_name;
    }

    /**
     * @brief Get the representing tile for the terrain.
     *
     * @returns the representing tile
     */
    unsigned getTile() const {
      return m_tile;
    }

  private:
    const std::string m_name;
    const unsigned m_tile;
  };

}


#endif // TMX_TERRAIN_H
