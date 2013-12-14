#include "projectile.hpp"

#include <string>

#include "context.hpp"
#include "entity.hpp"

using namespace squeezebox;
using namespace std;

Projectile::Projectile(Context *c, int x, int y, int iw, int ih, int xv, int yv, string path) : Entity(c, x, y, iw, ih, path),
lifespan(256) {
	set_x_velocity(xv);
	set_y_velocity(yv);
	get_body()->SetGravityScale(0);
}

void Projectile::update() {
	lifespan -= 1;
	Entity::update();
	if (lifespan <= 0) {
		destroy();
	}
}

void Projectile::collide() {
	for (Entity *e : contacts) {
		cout << "mark" << endl;
		if (e != NULL) {
			e->destroy();
		}
		lifespan = 0;
	}
}
