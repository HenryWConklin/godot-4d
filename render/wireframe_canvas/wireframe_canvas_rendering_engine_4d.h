#pragma once

#include "../rendering_engine_4d.h"

// Trivial CPU-based renderer that draws wireframes to a Control-based canvas.
// Very inefficient, but easy to implement, and even once we have a better
// renderer, this can still be useful for testing and debugging.
class WireframeCanvasRenderingEngine4D : public RenderingEngine4D {
	GDCLASS(WireframeCanvasRenderingEngine4D, RenderingEngine4D);

protected:
	static void _bind_methods() {}

public:
	virtual bool prefers_wireframe_meshes() override { return true; }
	void setup_for_viewport() override;
	void render_frame() override;
};
