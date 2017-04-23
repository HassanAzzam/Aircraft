//
//  cube.hpp
//  graphics
//
//  Created by Hassan Azzam on 4/22/17.
//  Copyright © 2017 Hassan Azzam. All rights reserved.
//
#include <stdio.h>

#include <vector>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>
#include "shader.hpp"
#include "Texture/texture.h"
#include "Texture/Texture Loader/stb_image.h"

class Model{
    
    GLuint vertexArrayID;
    GLuint vertexBufferID;
    glm::mat4 ModelMatrix;
    GLuint MatrixID;
    GLuint programID;
    GLuint textureID;
    GLuint UVDataBufferID;
    
public:
    Model();
    ~Model();
    
    std::vector<glm::vec2> UVData;
    GLenum TextureTarget;
    Texture *Texture;
    void Initialize(int Sx, int Sy, int Sz);
    void Draw();
    void Cleanup();
};
