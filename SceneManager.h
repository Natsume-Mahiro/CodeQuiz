#pragma once

class SceneManager
{
public:
    SceneManager();
    ~SceneManager();

    enum class Scene
    {
        TITLE_LOAD,
        TITLE,
        STAGE_SELECT
    };
    Scene getCurrentScene() const { return currentScene; }
    void switchScene(Scene scene);

private:
    Scene currentScene;
};
