#include <BanubaSdkManager.hpp>

#include "BanubaClientToken.hpp"

int main()
{
    BanubaSdkManager sdk(
        "Realtime Camera Preview",
        {BanubaSdkManager::sdk_resources_path(), BNB_RESOURCES_FOLDER},
        BNB_CLIENT_TOKEN);
    sdk.load_effect("effects/TrollGrandma", true);
    sdk.process_camera();
    sdk.run_main_loop();
    return 0;
}
