# ArgoCD Complete Deep-Dive Guide

A comprehensive, interactive HTML reference covering ArgoCD from fundamentals to production-grade deployments. Built as a single self-contained file with animated diagrams, a fixed sidebar navigation, and copy-to-clipboard code blocks.

---

## What's Inside

The guide is organized into **22 sections** across 5 categories:

**Foundations** — What ArgoCD is, GitOps principles, internal architecture (with animated component diagrams), and step-by-step installation (YAML and Helm methods).

**Core Usage** — Application CRD, Projects, Repositories, Clusters, a hands-on first deployment walkthrough, sync policies, sync waves/hooks, and native Helm/Kustomize/Jsonnet/multi-source integration.

**Advanced** — Multi-cluster and multi-tenancy patterns, RBAC and SSO configuration (GitHub, Okta/OIDC), ApplicationSets (Git directory, list, matrix, pull request generators), notifications (Slack, webhooks), custom health checks (Lua), resource actions, and secrets management (Sealed Secrets, External Secrets Operator, Vault + AVP, SOPS).

**Operations** — Diff strategies and ignore differences, disaster recovery and HA setup, CI/CD pipeline integration (GitHub Actions example, ArgoCD Image Updater), Prometheus monitoring with alerting rules, and a troubleshooting guide for common issues.

**Production** — Best practices checklist, App-of-Apps pattern, comparison with Flux CD / Jenkins X / Spinnaker, and a complete real-world production scenario walking through the full deployment workflow.

---

## Features

- **Fixed left sidebar** with section grouping and scroll-based active highlighting
- **Animated visual diagrams** replacing traditional ASCII art (architecture, push/pull model, multi-cluster, CI/CD pipeline, data flow)
- **Copy-to-clipboard** button on every code block (appears on hover, shows confirmation)
- **Mobile responsive** with hamburger menu for smaller screens
- **Dark theme** optimized for readability
- **Zero dependencies** — single HTML file, no external CSS/JS required

---

## How to Use

Open the file directly in any modern browser:

```
ArgoCD-Complete-Guide.html
```

No server, build step, or internet connection required.

---

## Tech Stack

| Layer     | Technology          |
|-----------|---------------------|
| Markup    | HTML5               |
| Styling   | CSS3 (custom properties, grid, flexbox, animations) |
| Scripting | Vanilla JavaScript  |
| Fonts     | System font stack + Fira Code (monospace) |

---

## Author

**Sim Vattanac**
DevOps Engineer

Contact: [vattanacsim99@gmail.com](mailto:vattanacsim99@gmail.com)

---

## License

&copy; 2026 Sim Vattanac. All rights reserved.
