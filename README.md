# samp-streamer-plugin-sampgdk-invoke
The code necessary to invoke Streamer Plugin's functions/callbacks from a sampGDK plugin.

Details
-------
Latest supported Streamer Plugin: v2.9.2+ (usually it has functions that aren't officially released).
*Makes use of Zeex's sampGDK Amalgamation:* https://github.com/Zeex/sampgdk

`streamer.hpp` looks mostly like `streamer.inc`, so it is pretty easy to use Streamer's functions with the correct definitions.

It misses the extended create item creation functions (excepting the alternative for `CreateDynamicMapIconEx` - `Plugins::Streamer::MapIcon::CreateEx` - because I needed only it once and I created it). I find these extended functions to be too big and I didn't need them, but I may add them if asked to in the future). Also, it may miss some default `streamer.inc` definitions.

If you want anything missing to be added you can create an issue or send a pull request.

Usage
-----
Functions declarations are available in `streamer.hpp`. Each function type has its own namespace. For example, if in Pawn you did `CreateDynamicObject( ... );` now you can do it like `Plugins::Streamer::Object::Create`, it is still returning the object ID.

* To integrate it in your gamemode you may need to do small changes, such as changing sampGDK's include path or just renaming the `streamer` files.