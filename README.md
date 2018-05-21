# Better Directory 2016
Provides a member directory content type and view. There are three different styles to choose from. List, grid, or cards (materializecss).

## Installation

1. Upload feature to /sites/all/modules/features/
2. Enable feature
   * Go to _Structure > Features_
   * Enable feature
   * If the feature "State" is overridden, you will need to revert it.
     * Click the "Overridden" link
     * Check any empty checkboxes, and click "Revert Components."
3. Go to _Structure > Views_, and edit the "Directory" view.
4. Choose the display type you want (Grid, Cards, List), and disable the displays you won't be using.
5. Update the path for your chosen display, if necessary.
6. Save the view settings.
7. Check the URL Alias pattern for the Directory Entry type, and make sure it is set to directory/[node:title].
