//  Copyright (c) 2016 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#include <toyui/Config.h>
#include <toyui/Button/Checkbox.h>

namespace toy
{
	Checkbox::Checkbox(Wedge& parent, Callback callback, bool on)
		: Toggle(parent, callback, on, cls())
	{}
}
