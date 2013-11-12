#ifndef SQUEEZEBOX_CONTEXT_HPP
#define SQUEEZEBOX_CONTEXT_HPP

#include <string>

#include <SDL2/SDL.h>
#include <GL/glew.h>

using namespace std;

namespace squeezebox {
	class Context {
		public:
			Context(const string name);
			~Context();

			const GLuint get_standard_indices_handler() const { return standard_indices_handler; }
			const int get_screen_width() const { return screen_width; }
			const int get_screen_height() const { return screen_height; }
			const int get_camera_x() const { return camera_x; }
			const void set_camera_x(int camera_x) { this->camera_x = camera_x; }
			const int get_camera_y() const { return camera_y; }
			const void set_camera_y(int camera_y) { this->camera_y = camera_y; }

			void update_screen();
		private:
			GLuint standard_indices[4];
			GLuint standard_indices_handler;
			SDL_Window *screen;
			SDL_GLContext context;
			int screen_width, screen_height;
			int camera_x, camera_y;
	};
}

#endif
