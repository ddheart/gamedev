#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include "ShaderManager.hpp"
#include "ModelManager.hpp"
#include "../Core/Init/IListener.hpp"

class SceneManager: public IListener{
  private:
    ShaderManager shaderManager;
    ModelManager modelManager;
    glm::mat4 view_matrix;
    glm::mat4 projection_matrix;
  public:
    SceneManager();
    ~SceneManager() = default;

    virtual void notifyBeginFrame();
    virtual void notifyDisplayFrame();
    virtual void notifyEndFrame();
    virtual void notifyReshape(int width, int height, 
                               int pwidth, int pheight);
};

#endif
