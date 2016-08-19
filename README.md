# Islandora Badges

## Introduction

Islandora Badges displays Altmetrics badges, Scopus Citation Count badges, and Web of Science citation counts on objects. This is mostly based on the [Islandora Altmetrics module](https://github.com/Islandora/islandora_altmetrics), expanded to include Scopus and Web of Science.

Take note: 
- You do NOT need to be a Scopus subscriber to use or view the Scopus piece. You can [get a Scopus API key for free](http://dev.elsevier.com/sc_apis.html).
- You DO need to be a Web of Science subscriber to get AMR credentials, but citation counts and links can be viewed by the general public.


**The Altmetrics piece** uses the [Altmetrics API](http://api.altmetric.com/). Before using this module one should familiarize oneself with the licensing.

**The Scopus piece** uses the [Scopus Abstract Citation Count API](https://api.elsevier.com/documentation/AbstractCitationCountAPI.wadl). A default API key is included, but this is intended for demo purposes only and is very limited. You should get your own free API key from Scopus.

**The Web of Science piece** uses the WOS [Article Match Retrieval (AMR)](http://ipscience-help.thomsonreuters.com/LAMRService/WebServiceOperationsGroup/requestAPIWoS.html) service. Credentials are required to use the API, but not to view the results. Web of Science subscribers are entitled to credentials - contact your account manager to get set up.

## Requirements

This module requires the following modules/libraries:

* [Islandora](https://github.com/islandora/islandora)
* [Tuque](https://github.com/islandora/tuque)

## Installation

Install as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

## Configuration

Configuration path is admin/islandora/tools/badges (Administration > Islandora > Islandora Utility Modules > Islandora Badges Configuration).

There are six administration fields:

* Altmetric Badge
     * Provide one of the [badge types](http://api.altmetric.com/embeds.html#badge-types) defined by Altmetrics. Default is the small rectangular badge. Other options include various doughnut shapes and differently styled rectangles.
     * Case sensitive.
* Altmetrics Popover
     * Pefines the location where the [popover displays](http://api.altmetric.com/embeds.html#popovers). Current options are left, right, top or bottom. Case sensitive.
* Scopus API Key
     * Required to acquire citation counts. Do not use the included default in production - it's for demo purposes only. 
     * You can get a [free API key](http://dev.elsevier.com/sc_apis.html) without subscribing
* Web of Science username/password
     * No default is provided, and the service won't work without these. 
     * If you are a WOS subscriber, you can request AMR credentials from your account manager.
* DOI XPath
     * The XPath to the DOI element e.g. /mods:mods/mods:identifier[@type="doi"] 
     * A default is included and should serve most repositories, but you can change it if yours is located elsewhere.

The module provides two separate blocks, Islandora Altmetrics and Islandora Scopus, which can be placed in a block region.

The blocks come with some default configurations.

![](https://raw.githubusercontent.com/wiki/dmoses/islandora_altmetrics/islandora_altmetrics_block_config.png)

Once enabled the badge is displayed on pages that have a DOI as configured and some metrics.  If it has a DOI, but doesn't display, then the article doesn't currently have any metrics.

Future development:
* Make the Altmetric API Key a configurable variable 
* Allow other kinds of identifiers (besides DOI) to be used
* Remove the restriction that limits badges to Citation objects
* Add more badges

## Documentation

Further documentation for this module is available at [our wiki](https://wiki.duraspace.org/display/ISLANDORA/Islandora+Altmetrics).

## Troubleshooting/Issues

Having problems or solved a problem? Check out the Islandora google groups for a solution.

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

## Maintainers/Sponsors

Current maintainers:

* [Brandon Weigel](https://github.com/bondjimbond)

## Development

If you would like to contribute to this module, please check out [CONTRIBUTING.md](CONTRIBUTING.md). In addition, we have helpful [Documentation for Developers](https://github.com/Islandora/islandora/wiki#wiki-documentation-for-developers) info, as well as our [Developers](http://islandora.ca/developers) section on the [Islandora.ca](http://islandora.ca) site.

## Notes

Built by [Mark Jordan](https://github.com/mjordan) and [Brandon Weigel](https://github.com/bondjimbond) for the second iCampBC in July 2016. Makes heavy use of the [Islandora Altmetrics](https://github.com/Islandora/islandora_altmetrics) code written by [William Panting](https://github.com/willtp87). Thanks also to [Marcus Barnes](https://github.com/MarcusBarnes) for demonstrating how to assign array data to variables, which enabled development on the Web of Science branch.

## License

[GPLv3](http://www.gnu.org/licenses/gpl-3.0.txt)
