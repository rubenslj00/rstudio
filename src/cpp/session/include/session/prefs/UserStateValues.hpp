/* UserPrefValues.hpp
 *
 * Copyright (C) 2009-19 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */
 
/* DO NOT HAND-EDIT! This file is automatically generated from the formal user preference schema
 * JSON. To add a preference, add it to "user-prefs-schema.json", then run "generate-prefs.R" to
 * rebuild this file.
 */

#ifndef SESSION_USER_STATE_VALUES_HPP
#define SESSION_USER_STATE_VALUES_HPP

#include <session/prefs/Preferences.hpp>

namespace rstudio {
namespace session {
namespace modules {
namespace prefs {

#define kContextId "context_id"
#define kAgreementHash "agreement_hash"
#define kAutoCreatedProfile "auto_created_profile"
#define kTheme "theme"
#define kDefaultProjectLocation "default_project_location"
#define kClearHidden "clear_hidden"
#define kExportPlotOptions "export_plot_options"
#define kExportViewerOptions "export_viewer_options"
#define kSavePlotAsPdfOptions "save_plot_as_pdf_options"
#define kCompileRNotebookPrefs "compile_r_notebook_prefs"
#define kCompileRMarkdownNotebookPrefs "compile_r_markdown_notebook_prefs"
#define kShowPublishUi "show_publish_ui"
#define kEnableRsconnectPublishUi "enable_rsconnect_publish_ui"
#define kPublishAccount "publish_account"
#define kDocumentOutlineWidth "document_outline_width"
#define kConnectVia "connect_via"
#define kConnectViaConnectRConsole "connect-r-console"
#define kConnectViaConnectNewRScript "connect-new-r-script"
#define kConnectViaConnectNewRNotebook "connect-new-r-notebook"
#define kConnectViaConnectCopyToClipboard "connect-copy-to-clipboard"
#define kCranMirrorChanged "cran_mirror_changed"

class UserStateValues: public Preferences
{
public:
   /**
    * A unique identifier representing the user and machine.
    */
   std::string contextId();

   /**
    * Hash of the agreement that the user has accepted.
    */
   std::string agreementHash();

   /**
    * Whether we have automatically created an .Rprofile for this user.
    */
   bool autoCreatedProfile();

   /**
    * The color theme to apply.
    */
   bool theme();

   /**
    * The directory path under which to place new projects by default. Shadows a uipref.
    */
   std::string defaultProjectLocation();

   /**
    * Whether to clear hidden objects along with visible objects when clearing the workspace. Set automatically to remember last action.
    */
   bool clearHidden();

   /**
    * The most recently used plot export options.
    */
   bool exportPlotOptions();

   /**
    * The most recently used viewer export options.
    */
   bool exportViewerOptions();

   /**
    * The most recently used options for saving a plot as a PDF.
    */
   bool savePlotAsPdfOptions();

   /**
    * Most recently used settings for compiling a notebook from an R script.
    */
   bool compileRNotebookPrefs();

   /**
    * Most recently used settings for compiling a notebook using R Markdown.
    */
   bool compileRMarkdownNotebookPrefs();

   /**
    * Whether to show UI for publishing content.
    */
   bool showPublishUi();

   /**
    * Whether to show UI for publishing content to RStudio Connect.
    */
   bool enableRsconnectPublishUi();

   /**
    * The default (last) account used for publishing
    */
   bool publishAccount();

   /**
    * The preferred width, in pixels, of the document outline pane.
    */
   int documentOutlineWidth();

   /**
    * How to create new connections to data sources.
    */
   std::string connectVia();

   /**
    * Whether the CRAN mirror has been changed from its default.
    */
   bool cranMirrorChanged();

};

   
}
}
}
}

#endif
